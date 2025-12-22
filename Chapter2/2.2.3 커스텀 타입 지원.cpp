import<iostream>;

using namespace std;

class KeyValue
{
public:
	KeyValue(string_view key, int value) : m_key{ key }, m_value{ value }{}

	const string& getKey() const { return m_key; }
	int getValue() const { return m_value; }

private:
	string m_key;
	int m_value;
};

template<>
class formatter<KeyValue>
{
public:
	constexpr auto parse(auto& context)
	{
		auto iter{ context.begin() };
		const auto end{ context.end() };
		if (iter == end || *iter == '}') // {} 포맷 지정자
		{
			m_outputType = OutputType::KeyAndValue;
			return iter;
		}

		switch (*iter)
		{
		case 'a':	// {:a}	포맷 지정자
			m_outputType = OutputType::KeyOnly;
			break;
		case 'b':	// {:b}	포맷 지정자
			m_outputType = OutputType::ValueOnly;
			break;
		case 'c':	// {:c} 포맷 지정자
			m_outputType = OutputType::KeyAndValue;
			break;
		default:
			throw format_error{ "Invalud KeyValue format specifier." };
		}

		++iter;
		if (iter != end && *iter != '}')
		{
			throw format_error{ "Invalid KeyValue format specifier." };
		}
		return iter;
	}

	auto format(const KeyValue& kv, auto& context) const
	{
		switch (m_outputType)
		{
		using enum OutputType;

		case KeyOnly:
			return format_to(context.out(), "{}", kv.getKey());
		case ValueOnly:
			return format_to(context.out(), "{}", kv.getValue());
		default:
			return format_to(context.out(), "{} - {}", kv.getKey(), kv.getValue());
		}
	}

private:
	enum class OutputType
	{
		KeyOnly,
		ValueOnly,
		KeyAndValue
	};
	OutputType m_outputType{ OutputType::KeyAndValue };
};
int main()
{
	KeyValue keyValue{ "Key1", 11 };
	cout << format("{}", keyValue) << endl;
	cout << format("{:a}", keyValue) << endl;
	cout << format("{:b}", keyValue) << endl;
	cout << format("{:c}", keyValue) << endl;
	try
	{
		cout << format("{:cd}", keyValue) << endl;
	}
	catch(const format_error& caught_exception)
	{
		cout << caught_exception.what();
	}

	return 0;
}
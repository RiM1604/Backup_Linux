class Attr
{
public:
	virtual bool operator==(const Attr &right)
	{
		return false;
	};

	virtual bool operator!=(const Attr &right)
	{
		return false;
	};

	virtual bool operator<(const Attr &right)
	{
		return false;
	};

	virtual bool operator<=(const Attr &right)
	{
		return false;
	};

	virtual bool operator>=(const Attr &right)
	{
		return false;
	};

	virtual void print()
	{
		cout << "entered base class" << endl;
	}

	virtual Attr *clone()
	{
		return NULL;
	}
	// virtual getvalue()
	// {
	// 	cout<<"value is not there in Attr"<<endl;
	// }
};

class stringAttribute : public Attr
{
private:
	string value;

public:
	Attr *clone()
	{
		return new stringAttribute(*this);
	}

	void print()
	{
		cout << value << " ";
	} // virtual printing function

	stringAttribute(string input_value)
	{
		value = input_value;
	}

	bool operator==(const stringAttribute &right)
	{

		if (value == right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!=(const stringAttribute &right)
	{
		if (value == right.value)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool operator<(const stringAttribute &right)
	{
		if (value < right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator<=(const stringAttribute &right)
	{
		if (value <= right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>(const stringAttribute &right)
	{
		if (value > right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>=(const stringAttribute &right)
	{
		if (value >= right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	// string getvalue()
	// {
	// 	return value;
	// }
	friend Relation *projection(Relation *, list<string>);
};

class integerAttribute : public Attr
{
private:
	int value;

public:
	void print()
	{
		cout << value << " ";
	} // virtual printing func for int
	Attr *clone()
	{
		return new integerAttribute(*this);
	}

	integerAttribute(int input_value)
	{
		value = input_value;
	}

	bool operator==(const integerAttribute &right)
	{

		if (value == right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!=(const integerAttribute &right)
	{
		if (value == right.value)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool operator<(const integerAttribute &right)
	{
		if (value < right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator<=(const integerAttribute &right)
	{
		if (value <= right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>(const integerAttribute &right)
	{
		if (value > right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>=(const integerAttribute &right)
	{
		if (value >= right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	friend Relation *projection(Relation *, list<string>);
};

class floatAttribute : public Attr
{
private:
	float value;

public:
	void print()
	{
		cout << value << " ";
	} // virtual print func for float

	floatAttribute(float input_value)
	{
		value = input_value;
	}

	Attr *clone()
	{
		return new floatAttribute(*this);
	}

	bool operator==(const floatAttribute &right)
	{

		if (value == right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!=(const floatAttribute &right)
	{
		if (value == right.value)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool operator<(const floatAttribute &right)
	{
		if (value < right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator<=(const floatAttribute &right)
	{
		if (value <= right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>(const floatAttribute &right)
	{
		if (value > right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>=(const floatAttribute &right)
	{
		if (value >= right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	// float getvalue()
	// {
	// 	return value;
	// }
	friend Relation *projection(Relation *, list<string>);
};

class DoubleAttribute : public Attr
{
private:
	double value;

public:
	void print()
	{
		cout << value << " ";
	} // virtual print func for float

	DoubleAttribute(float input_value)
	{
		value = input_value;
	}

	Attr *clone()
	{
		return new DoubleAttribute(*this);
	}

	bool operator==(const DoubleAttribute &right)
	{

		if (value == right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!=(const DoubleAttribute &right)
	{
		if (value == right.value)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool operator<(const DoubleAttribute &right)
	{
		if (value < right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator<=(const DoubleAttribute &right)
	{
		if (value <= right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>(const DoubleAttribute &right)
	{
		if (value > right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>=(const DoubleAttribute &right)
	{
		if (value >= right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	// float getvalue()
	// {
	// 	return value;
	// }
	friend Relation *projection(Relation *, list<string>);
};
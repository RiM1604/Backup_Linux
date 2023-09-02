#include <bits/stdc++.h>
using namespace std;

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

	virtual Attr*clone()
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

    Attr*clone()
    {
        return new stringAttribute(*this);
    }

	void print()
	{
		cout <<"value:"<<value<<" ";
	}//virtual printing function

	stringAttribute(string input_value)
	{
		value=input_value;
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
};

class integerAttribute : public Attr
{
private:
	int value;

public:

	void print()
	{
		cout <<"value:"<<value<<" ";
	}//virtual printing func for int

	
	integerAttribute(int input_value)
	{
		value=input_value;
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

	
};

class floatAttribute : public Attr
{
private:
	float value;

public:
	
	void print()
	{
		cout <<"value:"<<value<<" ";
	}//virtual print func for float

	floatAttribute(float input_value)
	{
		value=input_value;
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
};



class Record
{
	vector<Attr *> attrptr;
	vector<string> attrnamesrec; // for printing attrnames
	vector<int> attrindsrec;	 // to get attrinds outside the constructor scope

public:
	Record &operator=(const Record &re)
	{
		attrnamesrec = re.attrnamesrec;
		attrindsrec = re.attrindsrec;
		auto itcopy = attrptr.begin();
		for (auto it = re.attrptr.begin(); it != attrptr.end(); it++) // copying values from give re to the give vector of attr*
		{
			auto type = re.attrnamesrec.begin();
				// dynamic_cast<Attr*>//dynamic cast not allowed
				attrptr.push_back((*it)->clone());//using virtual copy constructor
			
		}

		return *this;//returning the copy assigned value
	}

	

	Record(vector<Attr*> _attributes, vector<string> attrnames, vector<int> attrinds)
	{
		for (int i = 0; i < attrnames.size(); i++)
		{
			attrnamesrec.push_back(attrnames[i]);
		}//getting values outside scope
		for (int i = 0; i < attrinds.size(); i++)
		{
			attrindsrec.push_back(attrinds[i]);
        }//getting values outside scope

		for (int i = 0; i < _attributes.size(); i++)
		{
			attrptr.push_back(_attributes[i]);	
		}//storing in record from the given <Arr*>
	}
	void print_record()
	{
		for (int i = 0; i < attrptr.size(); i++)
		{
			int j = attrindsrec[i];
            cout<<"Attribute "<<i<<":";
			cout << "attribute name:" << attrnamesrec[j]<<" ";
			attrptr[j]->print();
            cout<<endl;
		}
	}

	
};



class Relation
{
	int nattr, nrecs;
	vector<int> attrinds;
	vector<string> attrnames;
	list<Record *> recs;

public:
	Relation &operator=(const Relation &R1)
	{

		nattr = R1.nattr;
		nrecs = R1.nrecs;
		attrinds = R1.attrinds;
		attrnames = R1.attrnames;
		auto itcopy = recs.begin();
		for (auto it = R1.recs.begin(); it!= R1.recs.end(); it++)
		{	
			*itcopy = *it;
			itcopy++;
		}
		return *this;
	}

	Relation(list<Record*>records,int nrecords,vector<int>attrindsrecords,vector<string>names)
	{
		nrecs=nrecords;
		for(int i = 0; i < attrinds.size(); i++)
		{
			attrinds.push_back(attrindsrecords[i]);
		}
		
		for(int i = 0; i < names.size(); i++)
		{
			attrnames.push_back(names[i]);
		}

		for(auto it= records.begin(); it!=records.end(); it++)
		{
			recs.push_back(*it);
		}
	}

	void print_rel()
	{	
        cout<<"entered here"<<endl;
		int i=0;
		for (auto it = recs.begin(); it != recs.end(); ++it)
		{
			cout<<"Printing Record "<<i+1;
			(*it)->print_record();
			i++;

		}
	}

};



int main()
{
	// int nattr = 2, nrecs = 1;
	// vector<int> attrinds;
	// attrinds.push_back(1);
	// attrinds.push_back(0);
	// vector<string>attrnames;
    // attrnames.push_back("integeratt");
    // attrnames.push_back("stringatt");
	// Attr *p = new integerAttribute(3);
	// Attr *q = new stringAttribute("ritesh");
	// vector<Attr *> vec = {p, q};
	// Record*r=new Record(vec,attrnames,attrinds);
    // r->print_record();

	// Record*s=r;
    // cout<<" done"<<endl;
    // s->print_record();

	list<Record*>tecs;
	int nrecs=1;
	
	vector<int>attrinds;
	
            int nattr=3;
            
          
			vector<Attr*> attrvec;
			vector<string> attrnames;
            string input="ritesh";
            attrvec.push_back(new stringAttribute(input));
            int num=1023;
            attrvec.push_back(new integerAttribute(num));
            float flt=303.32;
            attrvec.push_back(new floatAttribute(flt));
            
            cout<<"0 for string 1 for integer 2 for float"<<endl;
            attrnames.push_back("stringattr");
            attrnames.push_back("integerattr");
            attrnames.push_back("floatattr");
			attrinds.push_back(0);
			attrinds.push_back(1);
			attrinds.push_back(2);

			tecs.push_back(new Record(attrvec,attrnames,attrinds));
		
		vector<string>columnnames;

        columnnames.push_back("stringthing");
        columnnames.push_back("integerthing");
        columnnames.push_back("floatattr");

    Relation rel(tecs,nrecs,attrinds,columnnames);
    cout<<tecs.size();
    (tecs.front())->print_record();
	rel.print_rel();


	// Relation s(nattr, nrecs, attrinds);
    cout<<"after copying"<<endl;
	Relation r = rel;
	rel.print_rel();
}
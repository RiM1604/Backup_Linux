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

	
	// string getvalue()
	// {
	// 	return value;
	// }

	// stringAttribute(const Attr* copy)
	// {
	// 	value=copy->value;
	// }

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
	// int getvalue()
	// {
	// 	return value;
	// }

	void print()
	{
		cout <<"value:"<<value<<" ";
	}//virtual printing func for int

	// integerAttribute(const Attr *copy)
	// {
	// 	value = copy->value;
	// }

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

	// int getvalue()
	// {
	// 	return value;
	// }
};

class floatAttribute : public Attr
{
private:
	float value;

public:
	// float getvalue()
	// {
	// 	return value;
	// }

	// floatAttribute(const Attr* copy)
	// {
	// 	value=copy->value;
	// }
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
				//(*itcopy)->getvalue() = (*it)->getvalue(); // using virtual function to get value from Attr* class
			// }
			// else if (*type == "string")
			// {
			// 	// dynamic_cast<Attr*>//dynamic cast not allowed
			// 	attrptr.push_back(new stringAttribute(*it));
			// 	//(*itcopy)->getvalue() = (*it)->getvalue();
			// }
			// else if (*type == "float")
			// {
			// 	// dynamic_cast<Attr*>//dynamic cast not allowed
			// 	attrptr.push_back(new floatAttribute(*it));
			// 	//(*itcopy)->getvalue() = (*it)->getvalue();
			// }
			// type++;
			// itcopy++;
		}

		return *this;//returning the copy assigned value
	}

	// Record(vector<Attr*> _attrptr)
	// {
	// 	for(auto it : _attrptr)
	// 	{
	// 		this->attrptr.push_back(new it->clone());
	// 	}
	// }

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

	// vector<string> getattrnamesrec()
	// {
	// 	return attrnamesrec;
	// }
	// vector<int> getattrindsrec()
	// {
	// 	return attrindsrec;
	// }
	// vector<Attr*> getattrptr()
	// {
	// 	return attrptr;
	// }
	//
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

		auto itcopy=recs.begin();
		for(auto it= records.begin(); it!=records.end(); it++)
		{
			*itcopy=*it;
		}
	}

	void print_rel()
	{	
		int i=0;
		for (auto it = recs.begin(); it != recs.end(); it++)
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

	list<Record*>recs;
	int nrecs;
	cout<<"enter no of recs: ";
	cin>>nrecs;
	vector<int>attrinds;
	for (int i = 0; i < nrecs; i++)
		{
            int nattr;
            cout<<"no of attributes for Rec "<<i;
            cin>>nattr;
			vector<Attr*> attrvec;
			vector<string> attrnames;
            for(int i = 0; i < nattr; i++)
            {
                string type;
                cout<<"enter the type: ";
                cin>>type;
                if(type=="string")
                {
                    string input;
                    string name;
					cout<<"0 for string 1 for int 2 for float";
					attrinds.push_back(0);
                    cout<<"enter name: ";
                    cin>>name;
                    attrnames.push_back(name);
                    cout<<"enter input: ";
                    cin>>input;
                    attrvec.push_back(new stringAttribute(input));
                }else if(type=="integer")
                {
                    int input;
                    string name;
					attrinds.push_back(1);
                    cout<<"enter name: ";
                    cin>>name;
                    attrnames.push_back(name);
                    cout<<"enter input: ";
                    cin>>input;
                    attrvec.push_back(new integerAttribute(input));
                }else if(type=="float")
                {
                    float input;
                    string name;
					attrinds.push_back(2);
                    cout<<"enter name: ";
                    cin>>name;
                    attrnames.push_back(name);
                    cout<<"enter input: ";
                    cin>>input;
                    attrvec.push_back(new floatAttribute(input));
                }
                
            }
			recs.push_back(new Record(attrvec,attrnames,attrinds));
		}
		vector<string>columnnames;

		for(int i=0;i<recs.size();i++)
		{
			string name;
			cin>>name;
			columnnames.push_back(name);
		}

    Relation rel(recs,nrecs,attrinds,columnnames);

	rel.print_rel();


	// Relation s(nattr, nrecs, attrinds);
	// Relation r = s;
	// s.print_rel();
}
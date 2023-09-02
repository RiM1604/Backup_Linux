class Attr;
class Record;
class Relation;

class stringAttribute;
class integerAttribute;
class floatAttribute;

Relation*rename(Relation*, string , string);
Relation* projection(Relation* R1, list<string>);
Relation* Union(Relation*, Relation*);

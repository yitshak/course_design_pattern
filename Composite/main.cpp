#include "Composite.hpp"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void)
{
	CharTreeNode a('a');
	CharTreeNode b('b');
	CharTreeNode d('d');
	CharTreeNode bb('b');
	CharTreeNode dd('d');
	CharTreeNode i('i');

	CharTreeLeaf c('c');
	CharTreeLeaf aa('a');
	CharTreeLeaf e('e');

	a.AddElement(b);
	a.AddElement(d);

	b.AddElement(c);
	b.AddElement(aa);
	b.AddElement(bb);
	bb.AddElement(aa);

	d.AddElement(aa);
	d.AddElement(dd);

	dd.AddElement(i);
	i.AddElement(e);

	std::vector<char> charVector;
	charVector.clear();
	a.doPrint(charVector);
	a.doPrint(charVector);
}
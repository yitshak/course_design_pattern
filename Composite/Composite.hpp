#pragma oncevate
#include <vector>
#include <iostream>

class CharTreeComponent {
public:
	CharTreeComponent(const char & id) :id_(id) {};
	virtual void doPrint(std::vector<char> & prefix) = 0;
protected:
	char id_;
};

class CharTreeNode : public CharTreeComponent {
public:
	CharTreeNode(const char & id) :CharTreeComponent(id) {};
	void AddElement(CharTreeComponent & component) {
		components_.push_back(&component);
	}
	virtual void doPrint(std::vector<char> & prefix) {
		prefix.push_back(id_);
		for (auto component : components_)
		{
			component->doPrint(prefix);
		}
		prefix.pop_back();
	}
		
private:
	std::vector<CharTreeComponent*> components_;
};

class CharTreeLeaf : public CharTreeComponent {
public:
	CharTreeLeaf(const char & id) :CharTreeComponent(id) {};
	virtual void doPrint(std::vector<char> & prefix) {
		prefix.push_back(id_);
		for (auto id : prefix)
		{
			std::cout << id;
		}
		prefix.pop_back();
		std::cout << std::endl;
	};
};
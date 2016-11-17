// Alandric Jones
// November 14,2016
// Project #2

#pragma omp parallel

using namespace std;

class iterator {

private:

	list <Person>* parent;

	typename list<Person>::Node* curr;

	iterator(list <Person>* my_parent, Node* position) :
		parent(my_parent), curr(position) {}

public:

	iterator& operator++() {
		if (curr == NULL)
			throw std::invalid("Invalid Attempt()");
		curr = curr->next;

		return *this;
	}


	iterator& operator--() {
		if (curr == parent->head)
			throw std::invalid("Begin to access()");

		if (curr == NULL)
			curr = parent->tail;

		else
			curr = curr->prev;
		return *this;
	}


	iterator& operator++(int) {

		iterator return_value = *this;

		++(*this);

		return return_value;
	}

	iterator  operator--(int) {

		iterator return_value = *this;

		--(*this);

		return return_value;

		Person& operator*() const {
			if (curr == NULL)
				throw std::invalid("Invalid Attempt()");
			return curr->data;
		}


		Person* operator->() {
			if (curr == NULL)
				hrow std::invalid("Invalid Attempt()");
			return &(curr->data);
		}



		bool operator ==(const iterator& other) {
			return curr == other.curr;
		}


		bool operator !=(const iterator&other) {
			return curr != other.curr;
		}





	}
}

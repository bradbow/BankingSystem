#pragma once

#ifndef _IDMAP_H
#define _IDMAP_
#include <map>
using namespace std;

/*
	Summary: templated class used for storing objects that can be uniquely identified
			 type I acts as an identifer and type D is the object that that identifier
			 uniquely identifies.  allows for quick look up by identifier
	Authod: Brad Bow
	class invariants: _idMap.size() >= 0
*/
template <class I, class D>
class IdMap
{
public:
	
	// ----------------------------------------------------------------------------------------- //
	// constructor / destructor

	/*
		Summary: consturctor
		Pre: none
		Post: IdMap object created
	*/
	IdMap(void){std::map<I, D> _idmap;}

	/*
		Summary: desturctor
		Pre: none
		Post: memory freed
	*/
	~IdMap(void);

	// ----------------------------------------------------------------------------------------- //
	// member methods

	/*
		Summary: adds an identifer - object mapping to the IdMap
		Pre: id identified elem
		Post: pair<I, D>(id, elem) added
	*/
	void add(I id, D elem);
	
	/*
		Summary: removes an identifer - object mapping to the IdMap
		Pre: id identifies elem
		Post: pair<I, D>(id, elem) removed
	*/
	void remove(I id);
	
	/*
		Summary: adds an identifer - object mapping to the IdMap
		Pre: id identifies an element, D in IdMap
		Post: D object identifeid by id is returned
	*/
	D get(I id);
	
	/*
		Summary: determines whether or not a object D, identified by
				 id is in the IdMap
		Pre: none
		Post: true returned is IdMap contains a D that is identifed by
			  id, false otherwise
	*/
	bool has(I id);

	// ----------------------------------------------------------------------------------------- //
	// iterators

	typename map<I, D>::iterator begin();
	typename map<I, D>::iterator end();
	typename map<I, D>::iterator getIterator();
	typename map<I, D>::iterator getIterator(I key);

	// ----------------------------------------------------------------------------------------- //

private:

	// ----------------------------------------------------------------------------------------- //
	// data members

	std::map<I, D> _idMap;

	// ----------------------------------------------------------------------------------------- //

};

#endif

// ----------------------------------------------------------------------------------------- //
// desturctor 

template <class I, class D>
IdMap<I, D>::~IdMap()
{
	map<I, D>::iterator mit;
	for (mit = _idMap.begin(); mit != _idMap.end(); ++mit)
	{
		delete mit->second;
	}
}

// ----------------------------------------------------------------------------------------- //
// member methods 

template <class I, class D>
void IdMap<I, D>::add(I id, D elem)
{
	_idMap[id] = elem;
}

template <class I, class D>
void IdMap<I, D>::remove(I id)
{
	
	map<I, D>::iterator mit = _idMap.find(id);
	if (mit != _idMap.end())
	{
		_idMap.erase(mit);
	}

}

template <class I, class D>
bool IdMap<I, D>::has(I id)
{
	map<I, D>::iterator mit = _idMap.find(id);
	return (mit != _idMap.end());
}

template <class I, class D>
D IdMap<I, D>::get(I id)
{

	map<I, D>::iterator mit = _idMap.find(id);
	if (mit != _idMap.end())
	{
		return mit->second;
	} 
	else 
	{
		return NULL;
	}

}

// --------------------------------------------------------------------------------------------- //
// Iterators

template <class I, class D>
typename map<I, D>::iterator IdMap<I, D>::getIterator()
{
	return _idMap.begin();
}

template <class I, class D>
typename map<I, D>::iterator IdMap<I, D>::getIterator(I key)
{
	return _idMap.find(key);
}

template <class I, class D>
typename map<I, D>::iterator IdMap<I, D>::begin()
{
	return _idMap.begin();
}

template <class I, class D>
typename map<I, D>::iterator IdMap<I, D>::end()
{
	return _idMap.end();
}

// --------------------------------------------------------------------------------------------- //



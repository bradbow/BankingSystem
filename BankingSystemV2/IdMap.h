#pragma once

#ifndef _IDMAP_H
#define _IDMAP_H

#include <map>
using namespace std;

template <class I, class D>
class IdMap
{
public:

	friend class TextFileDataSource;
	
	// ----------------------------------------------------------------------------------------- //
	// constructor / destructor

	IdMap(void){std::map<I, D> _idmap;}

	// ----------------------------------------------------------------------------------------- //
	// member methods

	void add(I id, D elem);
	void remove(I id);
	D get(I id);

	// ----------------------------------------------------------------------------------------- //
	// iterators
	typename map<I, D>::iterator begin();
	typename map<I, D>::iterator end();

	// ----------------------------------------------------------------------------------------- //

private:

	// ----------------------------------------------------------------------------------------- //
	// data members

	std::map<I, D> _idMap;

	// ----------------------------------------------------------------------------------------- //

};

#endif

// --------------------------------------------------------------------------------------------- //
// Member methods

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
typename map<I, D>::iterator IdMap<I, D>::begin()
{
	I f = _idMap.begin()->first;
	D d = _idMap.begin()->second;
	return _idMap.begin();
}

template <class I, class D>
typename map<I, D>::iterator IdMap<I, D>::end()
{
	return _idMap.end();
}

// --------------------------------------------------------------------------------------------- //



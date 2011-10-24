#pragma once

#ifndef _IDMAP_H
#define _IDMAP_H

#include <map>
using namespace std;

template <class I, class D>
class IdMap
{
public:

	// TODO fix iterator
	friend class TextFileDataSource;
	
	IdMap(void){std::map<I, D> _idmap;}

	void add(I id, D elem);
	void remove(I id);
	D get(I id);

	/*typename class Iterator 
	{

	public:

		IdMap::Iterator::Iterator(map<I, D>::iterator it)
		{
			keyValuePair = it;
		}
		
		Iterator& operator=(const Iterator& other)
		{
			keyValuePair = other.keyValuePair;
			return (*this);
		}

		bool operator==(const Iterator& other)
		{
			return keyValuePair == other.keyValuePair;
		}

		bool operator!=(const Iterator& other)
		{
			return keyValuePair != other.keyValuePair;
		}

		Iterator& operator++()
		{
			++keyValuePair;
		}

		Iterator& operator++(int)
		{
			Iterator tmp(*this);
			++(*this);
			return tmp;
		}

		pair<const I, D>& operator*()
		{
			return *keyValuePair;
		}

	private:
		pair<const I, D>* keyValuePair;

	};*/

	// iterators
	//Iterator<I, D> begin();
	//Iterator<I, D> end();

private:

	std::map<I, D> _idMap;

};

#endif

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

//template <class I, class D>
//Iterator IdMap<I, D>::begin()
//{
//	map<I, D>::iterator mit = _idMap.begin();
//	return Iterator(mit);
//}
//
//template <class I, class D>
//Iterator IdMap<I, D>::end()
//{
//	map<I, D>::iterator mit = _idMap.end();
//	return Iterator(mit);
//}



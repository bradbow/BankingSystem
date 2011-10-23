#pragma once

#ifndef _IDMAP_H
#define _IDMAP_H

#include <map>
using namespace std;

template <class I, class D>
class IdMap
{
public:
	
	IdMap(void){std::map<I, D> _idmap;}

	void add(I id, D elem);
	void remove(I id);
	D get(I id);

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



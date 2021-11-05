#pragma once
////////////////
//
//   Complic (Complic.h)
//   A very complicated C++ library that contains what you see when you have Math Class (no front)
//   This Library is meant to be a joke, thats why it wont be updates regulary like my normal projects!
// 
//   *I wonder how many peoples know using this library without looking at the source code for the Documentation*
//   
//   (c) Copy05 2016-2021
// 
///////////////

#include <string.h>
#include <iostream>
#include <math.h>

#define pbr(x, y) pow(x, y)

class Math {
private:
	typedef int nbr;
	typedef double pinbr;
	typedef double d_nbr;
	typedef double _r;
	typedef double _meq;
	typedef bool kndl_;

public:

	pinbr c_pI = 3.14;

	nbr c_gcs(_r c_cvalin)
	{
		return 2 * c_pI * c_cvalin;
	}

	nbr c_gca(_r c_valin)
	{
		return c_pI * pbr(c_valin, 2);
	}

	_meq _add(nbr _val01, nbr _val02)
	{
		return _val01 + _val02;
	}

	kndl_ _splitable(nbr valin)
	{
		if (valin % 2 == 0)
		{
			return true;
		}
		else {
			return false;
		}
	}

	nbr _multi_this(nbr valin)
	{
		return valin * valin;
	}

	d_nbr _expnd(d_nbr valin, d_nbr _expnd)
	{
		return pbr(valin, _expnd);
	}

};
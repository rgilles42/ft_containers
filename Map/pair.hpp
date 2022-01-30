/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:34:58 by rgilles           #+#    #+#             */
/*   Updated: 2022/01/30 13:30:08 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PAIR_HPP
#define PAIR_HPP

namespace ft
{
	template <class T1, class T2>
	struct pair
	{
		typedef	T1	first_type;
		typedef	T2	second_type;

		first_type	first;
		second_type	second;

		pair()							: first(), second()					{}
		pair(const T1& x, const T2& y)	: first(x), second(y)				{}
		template< class U1, class U2 >
		pair(const pair<U1, U2>& p)		: first(p.first), second(P.second)	{}
		pair&	operator=(const pair& rhs)									{
																				if (&rhs != this)
																				{
																					first = rhs.first;
																					second = rhs.second;
																				}
																				return (*this);
																			}
	};
	template< class T1, class T2 >
	bool		operator==(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)	{return (lhs.first == rhs.first && lhs.second == rhs.second);}
	template< class T1, class T2 >
	bool		operator!=(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)	{return (!(lhs == rhs));}
	template< class T1, class T2 >
	bool		operator< (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)	{return (lhs.first < rhs.first || (lhs.first == rhs.first && lhs.second < rhs.second));}
	template< class T1, class T2 >
	bool		operator<=(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)	{return (!(rhs < lhs));}
	template< class T1, class T2 >
	bool		operator> (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)	{return (rhs < lhs);}
	template< class T1, class T2 >
	bool		operator>=(const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)	{return (!(lhs < rhs));}

	template<class T1, class T2>
	pair<T1,T2>	make_pair (T1 t, T2 u)										{return (pair<T1, T2>(t, u));}

}

#endif
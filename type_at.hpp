// Boost type_at library

// Use, modification, and distribution is subject to the Boost Software License, Version 1.0.
// See http://www.boost.org/LICENSE_1_0.txt

// Author:	tymofey (tymofey@qip.ru)

#ifndef BOOST_TYPE_AT_HPP
#define BOOST_TYPE_AT_HPP

#include <cstddef>

namespace boost
{
    template <std::size_t const index, typename... Types>
    struct type_at;

    template <std::size_t const index, typename Head, typename... Rest>
    struct type_at<index, Head, Rest...>
    {
        typedef typename type_at<index-1, Rest...>::type type;
    };

    template <typename Head, typename... Rest>
    struct type_at<0, Head, Rest...>
	{
        typedef Head type;
    };
}

#endif //BOOST_UTILITY_TYPE_AT_HPP

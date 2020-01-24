#pragma once
#include <stdbool.h>

/**
 * @brief Parent Object Class
 * 
 */
class Object {
public:

	/**
	 * @brief checks if the given object is equivalent to this object
	 * 
	 * @param o given object to be compared
	 * @return true if equivalent
	 * @return false if non-equivalent
	 */
	bool equals(Object o);

	/**
	 * @brief duplicates object with identical attributes
	 * 
	 * @return Object cloned object
	 */
	Object copy();

	/**
	 * @brief computes unique identity-corresponding integer for object
	 * 
	 * @return int hash value
	 */
	int hashcode();

};
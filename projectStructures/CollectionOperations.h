#ifndef COLLECTION_OPERATIONS
#define COLLECTION_OPERATIONS

#include "Array.h"

#include "../MDPLibrary/SharedPointer.h"
#include "../MDPLibrary/Structures.h"

template <template <typename> typename Collection, typename Element>
SharedPointer<Collection<Element>> subsegment(SharedPointer<Iterator<Element>>, SharedPointer<Size>);

template <typename Element>
SharedPointer<Array<Element>> replacedArray(SharedPointer<Array<Element>>, SharedPointer<Index>, SharedPointer<Size>, Element);

#include "CollectionOperations.cpp"

#endif
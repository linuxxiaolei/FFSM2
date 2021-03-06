namespace ffsm2 {
namespace detail {

////////////////////////////////////////////////////////////////////////////////

template <typename T>
bool
IteratorT<T>::operator != (const IteratorT<T>& FFSM2_IF_ASSERT(other)) const noexcept {
	FFSM2_ASSERT(&_container == &other._container);

	return _cursor != _container.limit();
}

//------------------------------------------------------------------------------

template <typename T>
IteratorT<T>&
IteratorT<T>::operator ++() noexcept {
	_cursor = _container.next(_cursor);

	return *this;
}

////////////////////////////////////////////////////////////////////////////////

template <typename T>
bool
IteratorT<const T>::operator != (const IteratorT<const T>& FFSM2_IF_ASSERT(other)) const noexcept {
	FFSM2_ASSERT(&_container == &other._container);

	return _cursor != _container.limit();
}

//------------------------------------------------------------------------------

template <typename T>
IteratorT<const T>&
IteratorT<const T>::operator ++() noexcept {
	_cursor = _container.next(_cursor);

	return *this;
}

////////////////////////////////////////////////////////////////////////////////

}
}

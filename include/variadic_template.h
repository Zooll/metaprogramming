#ifndef VARIADIC_TEMPLATE_H
#define VARIADIC_TEMPLATE_H

template<typename T>
void print(T value);

template<typename T, typename... Args>
void print(T firstValue, Args... restValues);

#endif // VARIADIC_TEMPLATE_H

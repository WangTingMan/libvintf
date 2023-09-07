#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(LIBVINTF_EXPORTS_IMPL)
#define LIBVINTF_API __declspec(dllexport)
#else
#define LIBVINTF_API __declspec(dllimport)
#endif  // defined(LIBVINTF_EXPORTS_IMPL)

#else  // defined(WIN32)
#if defined(LIBVINTF_EXPORTS_IMPL)
#define LIBVINTF_API __attribute__((visibility("default")))
#else
#define LIBVINTF_API
#endif  // defined(LIBVINTF_EXPORTS_IMPL)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif

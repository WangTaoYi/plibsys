/*
 * Copyright (C) 2017 Alexander Saprykin <xelfium@gmail.com>
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file pmacroscompiler.h
 * @brief Compiler detection macros
 * @author Alexander Saprykin
 *
 * All the macros are completely independent of any other platform-specific
 * headers, thus gurantee to work with any compiler under any operating system
 * in the same way as they are used within the library.
 *
 * This family of macros provides compiler detection and defines one or several
 * of P_CC_x macros.
 */

#if !defined (PLIBSYS_H_INSIDE) && !defined (PLIBSYS_COMPILATION)
#  error "Header files shouldn't be included directly, consider using <plibsys.h> instead."
#endif

#ifndef PLIBSYS_HEADER_PMACROSCOMPILER_H
#define PLIBSYS_HEADER_PMACROSCOMPILER_H

/*
 * List of supported compilers (P_CC_x):
 *
 * MSVC            - Microsoft Visual C/C++
 * GNU             - GNU C/C++
 * MINGW           - MinGW C/C++
 * INTEL           - Intel C/C++
 * CLANG           - LLVM Clang C/C++
 * SUN             - Sun WorkShop/Studio C/C++
 * XLC             - IBM XL C/C++
 * HP              - HP C/aC++
 * DEC             - DEC C/C++
 * MIPS            - MIPSpro C/C++
 * USLC            - SCO OUDK and UDK C/C++
 * WATCOM          - Watcom C/C++
 * BORLAND         - Borland C/C++
 * PGI             - Portland Group C/C++
 * CRAY            - CRAY C/C++
 */

/**
 * @def P_CC_MSVC
 * @brief Microsoft Visual C/C++ compiler.
 * @since 0.0.1
 */

/**
 * @def P_CC_GNU
 * @brief GNU C/C++ compiler.
 * @since 0.0.1
 */

/**
 * @def P_CC_MINGW
 * @brief MinGW C/C++ compiler.
 * @since 0.0.1
 */

/**
 * @def P_CC_INTEL
 * @brief Intel C/C++ compiler.
 * @since 0.0.1
 */

/**
 * @def P_CC_CLANG
 * @brief LLVM Clang C/C++ compiler.
 * @since 0.0.1
 */

/**
 * @def P_CC_SUN
 * @brief Sun WorkShop/Studio C/C++ compiler.
 * @since 0.0.1
 */

/**
 * @def P_CC_XLC
 * @brief IBM XL C/C++ compiler.
 * @since 0.0.1
 */

/**
 * @def P_CC_HP
 * @brief HP C/aC++ compiler.
 * @since 0.0.1
 */

/**
 * @def P_CC_DEC
 * @brief DEC C/C++ compiler.
 * @since 0.0.2
 */

/**
 * @def P_CC_MIPS
 * @brief MIPSpro C/C++ compiler.
 * @since 0.0.1
 */

/**
 * @def P_CC_USLC
 * @brief SCO OUDK and UDK C/C++ compiler.
 * @since 0.0.1
 */

/**
 * @def P_CC_WATCOM
 * @brief Watcom C/C++ compiler.
 * @since 0.0.1
 */

/**
 * @def P_CC_BORLAND
 * @brief Borland C/C++ compiler.
 * @since 0.0.1
 */

/**
 * @def P_CC_PGI
 * @brief Portland Group C/C++ compiler.
 * @since 0.0.3
 */

/**
 * @def P_CC_CRAY
 * @brief Cray C/C++ compiler.
 * @since 0.0.4
 */

#if defined(_MSC_VER)
#  define P_CC_MSVC
#  if defined(__INTEL_COMPILER)
#    define P_CC_INTEL
#  endif
#  if defined(__clang__)
#    define P_CC_CLANG
#  endif
#elif defined(__GNUC__)
#  define P_CC_GNU
#  if defined(__MINGW32__)
#    define P_CC_MINGW
#  endif
#  if defined(__INTEL_COMPILER)
#    define P_CC_INTEL
#  endif
#  if defined(__clang__)
#    define P_CC_CLANG
#  endif
#  if defined(_CRAYC)
#    defined P_CC_CRAY
#  endif
#elif defined(__SUNPRO_C) || defined(__SUNPRO_CC)
#  define P_CC_SUN
#elif defined(__xlc__) || defined(__xlC__)
#  define P_CC_XLC
#elif defined(__HP_cc) || defined(__HP_aCC)
#  define P_CC_HP
#elif defined (__DECC) || defined(__DECCXX)
#  define P_CC_DEC
#elif (defined(__sgi) || defined(sgi)) && \
      (defined(_COMPILER_VERSION) || defined(_SGI_COMPILER_VERSION))
#  define P_CC_MIPS
#elif defined(__USLC__) && defined(__SCO_VERSION__)
#  define P_CC_USLC
#elif defined(__WATCOMC__)
#  define P_CC_WATCOM
#elif defined(__BORLANDC__)
#  define P_CC_BORLAND
#elif defined(__INTEL_COMPILER)
#  define P_CC_INTEL
#elif defined(__PGI)
#  define P_CC_PGI
#elif defined(_CRAYC)
#  define P_CC_CRAY
#endif

/* We need this to generate full Doxygen documentation */

#ifdef DOXYGEN
#  ifndef P_CC_MSVC
#    define P_CC_MSVC
#  endif
#  ifndef P_CC_GNU
#    define P_CC_GNU
#  endif
#  ifndef P_CC_MINGW
#    define P_CC_MINGW
#  endif
#  ifndef P_CC_INTEL
#    define P_CC_INTEL
#  endif
#  ifndef P_CC_CLANG
#    define P_CC_CLANG
#  endif
#  ifndef P_CC_SUN
#    define P_CC_SUN
#  endif
#  ifndef P_CC_XLC
#    define P_CC_XLC
#  endif
#  ifndef P_CC_HP
#    define P_CC_HP
#  endif
#  ifndef P_CC_DEC
#    define P_CC_DEC
#  endif
#  ifndef P_CC_MIPS
#    define P_CC_MIPS
#  endif
#  ifndef P_CC_USLC
#    define P_CC_USLC
#  endif
#  ifndef P_CC_WATCOM
#    define P_CC_WATCOM
#  endif
#  ifndef P_CC_BORLAND
#    define P_CC_BORLAND
#  endif
#  ifndef P_CC_PGI
#    define P_CC_PGI
#  endif
#  ifndef P_CC_CRAY
#    define P_CC_CRAY
#  endif
#endif

#endif /* PLIBSYS_HEADER_PMACROSCOMPILER_H */

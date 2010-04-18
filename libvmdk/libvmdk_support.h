/*
 * Support functions
 *
 * Copyright (c) 2009-2010, Joachim Metz <jbmetz@users.sourceforge.net>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBVMDK_SUPPORT_H )
#define _LIBVMDK_SUPPORT_H

#include <common.h>
#include <types.h>

#include <liberror.h>

#include "libvmdk_extern.h"
#include "libvmdk_libbfio.h"

#if defined( __cplusplus )
extern "C" {
#endif

LIBVMDK_EXTERN const char *libvmdk_get_version(
                            void );

LIBVMDK_EXTERN int libvmdk_check_file_signature(
                    const char *filename,
                    liberror_error_t **error );

#if defined( HAVE_WIDE_CHARACTER_TYPE )
LIBVMDK_EXTERN int libvmdk_check_file_signature_wide(
                    const wchar_t *filename,
                    liberror_error_t **error );
#endif

LIBVMDK_EXTERN int libvmdk_check_file_signature_file_io_handle(
                    libbfio_handle_t *file_io_handle,
                    liberror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif


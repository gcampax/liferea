/**
 * @file net.h  HTTP network access interface
 * 
 * Copyright (C) 2007-2009 Lars Windolf <lars.windolf@gmx.de>
 * Copyright (C) 2009 Emilio Pozuelo Monfort <pochu27@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version. 
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
 
#ifndef _NET_H
#define _NET_H

#include <glib.h>
#include "update.h"

/* Simple glue layer to abstract network code */

/** 
 * Initialize HTTP client networking support.
 */
void network_init (void);

/**
 * Cleanup HTTP client networking support.
 */
void network_deinit (void);

/**
 * Process the given update job.
 *
 * @param request	the update request
 */
void network_process_request (const updateJobPtr const job);

/**
 * Returns explanation string for the given network error code.
 *
 * @param netstatus	network error status
 * @param httpstatus	HTTP status code
 *
 * @returns explanation string
 */
const char * network_strerror (gint netstatus, gint httpstatus);

#endif

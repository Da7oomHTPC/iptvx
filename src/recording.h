/*

   Copyright 2018   Jan Kammerath

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

*/

#pragma once

#include <glib.h>

/* represents a single recording */
struct recording{
   /* name of the channel to record */
   GString* channel;

   /* the url of the channel */
   GString* url;

   /* title of the recording */
   GString* title;

   /* start and stop timings */
   long start;
   long stop;

   /* recording tolerance in seconds */
   long tolerance;

   /* number of minutes already recorded */
   int seconds_recorded;

   /* size of recorded file in bytes */
   long filesize;

   /* 0 = scheduled, 1 = in progress, 
      2 = finished, 9 = failed */
   int status;

   /* ptr to recording thread */
   void* thread;

   /* filename of the recording */
   GString* filename;
} typedef recording;
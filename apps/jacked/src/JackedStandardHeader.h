/*
 ==============================================================================

 This file is part of the JUCETICE project - Copyright 2007 by Lucio Asnaghi.

 JUCETICE is based around the JUCE library - "Jules' Utility Class Extensions"
 Copyright 2007 by Julian Storer.

 ------------------------------------------------------------------------------

 JUCE and JUCETICE can be redistributed and/or modified under the terms of
 the GNU Lesser General Public License, as published by the Free Software
 Foundation; either version 2 of the License, or (at your option) any later
 version.

 JUCE and JUCETICE are distributed in the hope that they will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU Lesser General Public License
 along with JUCE and JUCETICE; if not, visit www.gnu.org/licenses or write to
 Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 Boston, MA 02111-1307 USA

 ==============================================================================
*/

/* 
    This file includes the entire juce source tree via the amalgamated file.

    You could add the amalgamated file directly to your project, but doing it
    like this allows you to put your app's config settings in the 
    juce_AppConfig.h file and have them applied to both the juce headers and 
    the source code.
*/

#ifndef __JUCETICE_JACKED_STANDARD_HEADER__
#define __JUCETICE_JACKED_STANDARD_HEADER__

#ifdef JUCETICE_USE_AMALGAMA
 #include "JackedStandardConfig.h"
 #include "juce_amalgamated.h"
#else
 #include "juce.h"
#endif

#define JACKED_NAME                 T("Jacked")
#define JACKED_VERSION_STRING       T("0.1.0")

#define JACKED_LINKTYPE_AUDIO       0
#define JACKED_LINKTYPE_MIDI        1
#define JACKED_LINKTYPE_JACKMIDI    2

#endif


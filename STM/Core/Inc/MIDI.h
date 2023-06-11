/*
 * MIDI.h
 *
 *  Created on: Jun 10, 2023
 *      Author: r_middelman
 */

#ifndef INC_MIDI_H_
#define INC_MIDI_H_
#include "stdio.h"

void MIDI_Note_On(uint8_t note_Number, uint8_t note_Velocity, uint8_t note_Channel);
void MIDI_Note_Off(uint8_t note_Number, uint8_t note_Velocity, uint8_t note_Channel);



#endif /* INC_MIDI_H_ */

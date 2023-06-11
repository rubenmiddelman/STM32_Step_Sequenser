/*
 * MIDI.c
 *
 *  Created on: Jun 10, 2023
 *      Author: r_middelman
 */

#include "MIDI.h"



void MIDI_Note_On(uint8_t note_Number, uint8_t note_Velocity, uint8_t note_Channel)
{
	char Midi_Message[] = {0x92, 0, 0};
		Midi_Message[1] = note_Number;
		Midi_Message[2] = note_Velocity;
}

void MIDI_Note_Off(uint8_t note_Number, uint8_t note_Velocity, uint8_t note_Channel)
{
	char Midi_Message_Off[] = {0x83, 0, 0};
		Midi_Message_Off[1] = note_Number;
		Midi_Message_Off[2] = note_Velocity;
}

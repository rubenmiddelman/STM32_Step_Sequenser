/*
 * Midi.h
 *
 *  Created on: 15 Sep 2022
 *      Author: r_middelman
 */

#ifndef SRC_MIDI_H_
#define SRC_MIDI_H_


void Init_Midi();
void Send_Note_On(int note_Number, int velocity);
void Send_Note_Off(int note_Number, int velocity);



#endif /* SRC_MIDI_H_ */

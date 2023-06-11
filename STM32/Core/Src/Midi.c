/*
 * Midi.c
 *
 *  Created on: Sep 10, 2022
 *      Author: r_middelman
 */
#include "Midi.h"
#include "main.h"

extern UART_HandleTypeDef huart4;

void Init_Midi()
{

}

void Send_Note_On(int note_Number, int velocity)
{
	char Midi_Message[] = {0x92, 0, 0};
	Midi_Message[1] = note_Number;
	Midi_Message[2] = velocity;
	HAL_UART_Transmit(&huart4, Midi_Message, sizeof(Midi_Message), 1);
}

//
void Send_Note_Off(int note_Number, int velocity)
{
	char Midi_Message_Off[] = {0x83, 0, 0};
	Midi_Message_Off[1] = note_Number;
	Midi_Message_Off[2] = velocity;
	HAL_UART_Transmit(&huart4, Midi_Message_Off, sizeof(Midi_Message_Off), 1);
}

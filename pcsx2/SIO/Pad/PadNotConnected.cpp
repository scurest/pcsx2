/*  PCSX2 - PS2 Emulator for PCs
 *  Copyright (C) 2002-2023  PCSX2 Dev Team
 *
 *  PCSX2 is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU Lesser General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  PCSX2 is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with PCSX2.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#include "PrecompiledHeader.h"

#include "SIO/Pad/PadNotConnected.h"

PadNotConnected::PadNotConnected(u8 unifiedSlot)
	: PadBase(unifiedSlot)
{

}

PadNotConnected::~PadNotConnected() = default;

void PadNotConnected::Init()
{

}

Pad::ControllerType PadNotConnected::GetType()
{
	return Pad::ControllerType::NotConnected;
}

void PadNotConnected::Set(u32 index, float value)
{

}

void PadNotConnected::SetRawAnalogs(const std::tuple<u8, u8> left, const std::tuple<u8, u8> right)
{

}

void PadNotConnected::SetAxisScale(float deadzone, float scale)
{

}

void PadNotConnected::SetTriggerScale(float deadzone, float scale)
{

}

float PadNotConnected::GetVibrationScale(u32 motor)
{
	return 0;
}

void PadNotConnected::SetVibrationScale(u32 motor, float scale)
{

}

float PadNotConnected::GetPressureModifier()
{
	return 0;
}

void PadNotConnected::SetPressureModifier(float mod)
{

}

void PadNotConnected::SetButtonDeadzone(float deadzone)
{

}

void PadNotConnected::SetAnalogInvertL(bool x, bool y)
{

}

void PadNotConnected::SetAnalogInvertR(bool x, bool y)
{

}

u8 PadNotConnected::GetRawInput(u32 index)
{
	return 0;
}

std::tuple<u8, u8> PadNotConnected::GetRawLeftAnalog()
{
	return std::tuple<u8, u8>{0, 0};
}

std::tuple<u8, u8> PadNotConnected::GetRawRightAnalog()
{
	return std::tuple<u8, u8>{0, 0};
}

u32 PadNotConnected::GetButtons()
{
	return 0;
}

u8 PadNotConnected::GetPressure(u32 index)
{
	return 0;
}

void PadNotConnected::Freeze(StateWrapper& sw)
{
	// Protected PadBase members
	sw.Do(&rawInputs);
	sw.Do(&unifiedSlot);
	sw.Do(&isInConfig);
	sw.Do(&currentMode);
	sw.Do(&currentCommand);
	sw.Do(&commandBytesReceived);
}

u8 PadNotConnected::SendCommandByte(u8 commandByte)
{
	return 0xff;
}

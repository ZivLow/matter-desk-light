/*
 *
 *    Copyright (c) 2023 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */
package chip.devicecontroller.cluster.eventstructs

import chip.devicecontroller.cluster.*
import matter.tlv.AnonymousTag
import matter.tlv.ContextSpecificTag
import matter.tlv.Tag
import matter.tlv.TlvParsingException
import matter.tlv.TlvReader
import matter.tlv.TlvWriter

import java.util.Optional

class EnergyEvseClusterEnergyTransferStartedEvent (
    val sessionID: ULong,
    val state: UInt,
    val maximumCurrent: Long) {
  override fun toString(): String  = buildString {
    append("EnergyEvseClusterEnergyTransferStartedEvent {\n")
    append("\tsessionID : $sessionID\n")
    append("\tstate : $state\n")
    append("\tmaximumCurrent : $maximumCurrent\n")
    append("}\n")
  }

  fun toTlv(tlvTag: Tag, tlvWriter: TlvWriter) {
    tlvWriter.apply {
      startStructure(tlvTag)
      put(ContextSpecificTag(TAG_SESSION_I_D), sessionID)
      put(ContextSpecificTag(TAG_STATE), state)
      put(ContextSpecificTag(TAG_MAXIMUM_CURRENT), maximumCurrent)
      endStructure()
    }
  }

  companion object {
    private const val TAG_SESSION_I_D = 0
    private const val TAG_STATE = 1
    private const val TAG_MAXIMUM_CURRENT = 2

    fun fromTlv(tlvTag: Tag, tlvReader: TlvReader) : EnergyEvseClusterEnergyTransferStartedEvent {
      tlvReader.enterStructure(tlvTag)
      val sessionID = tlvReader.getULong(ContextSpecificTag(TAG_SESSION_I_D))
      val state = tlvReader.getUInt(ContextSpecificTag(TAG_STATE))
      val maximumCurrent = tlvReader.getLong(ContextSpecificTag(TAG_MAXIMUM_CURRENT))
      
      tlvReader.exitContainer()

      return EnergyEvseClusterEnergyTransferStartedEvent(sessionID, state, maximumCurrent)
    }
  }
}
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
package chip.devicecontroller.cluster.structs

import chip.devicecontroller.cluster.*
import matter.tlv.AnonymousTag
import matter.tlv.ContextSpecificTag
import matter.tlv.Tag
import matter.tlv.TlvParsingException
import matter.tlv.TlvReader
import matter.tlv.TlvWriter

import java.util.Optional

class FixedLabelClusterLabelStruct (
    val label: String,
    val value: String) {
  override fun toString(): String  = buildString {
    append("FixedLabelClusterLabelStruct {\n")
    append("\tlabel : $label\n")
    append("\tvalue : $value\n")
    append("}\n")
  }

  fun toTlv(tlvTag: Tag, tlvWriter: TlvWriter) {
    tlvWriter.apply {
      startStructure(tlvTag)
      put(ContextSpecificTag(TAG_LABEL), label)
      put(ContextSpecificTag(TAG_VALUE), value)
      endStructure()
    }
  }

  companion object {
    private const val TAG_LABEL = 0
    private const val TAG_VALUE = 1

    fun fromTlv(tlvTag: Tag, tlvReader: TlvReader) : FixedLabelClusterLabelStruct {
      tlvReader.enterStructure(tlvTag)
      val label = tlvReader.getString(ContextSpecificTag(TAG_LABEL))
      val value = tlvReader.getString(ContextSpecificTag(TAG_VALUE))
      
      tlvReader.exitContainer()

      return FixedLabelClusterLabelStruct(label, value)
    }
  }
}
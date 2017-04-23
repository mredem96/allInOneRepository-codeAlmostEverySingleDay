import QtQuick 2.6
import "./../_Buttons"
import "./../_MIDIKeyboards"
import "./../_StochasticSelectors"
import "./../_Sliders"
import "./../_imgButtons"
import "./../_QmlBootstrap/examples/"
import "./../_Pad"

Item {

    id: combo1_root
    width: parent.width
    height: parent.height
    visible: true

        Item {
            id: combo1keyboardEncapsulator
            height: parent.height * 0.5
            width: parent.width
            anchors.bottom: parent.bottom
            anchors.left: parent.left
            anchors.right: parent.right
            MidiKeyboardRandomSelect{}
        }


                Row {
                    id: combo1buttonEncapsulator
                    height: parent.height * 0.5
                    width: parent.width
                    anchors.top: parent.top
                    anchors.bottom: parent.verticalCenter
                    anchors.left: parent.left
                    anchors.right: parent.right

                    Repeater {
                        id: combo1ButtonRepeater
                        model: 10
                        Button5 {model: combo1ButtonRepeater.model}
                    }
                }
}

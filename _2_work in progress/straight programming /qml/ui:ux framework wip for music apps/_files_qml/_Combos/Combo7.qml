import QtQuick 2.6
import "./../_Buttons"
import "./../_MIDIKeyboards"
import "./../_StochasticSelectors"
import "./../_Sliders"
import "./../_imgButtons"
import "./../_QmlBootstrap/examples/"
import "./../_Pad"

Item {

    id: combo7_root
    width: parent.width
    height: parent.height
    visible: true

    Row {
        id: combo7buttonEncapsulator
        height: parent.height * 0.5
        width: parent.width
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: parent.right

        Repeater {
            id: combo7ButtonRepeater
            model: 10
            Button5 {model: combo7ButtonRepeater.model}
        }
    }
}

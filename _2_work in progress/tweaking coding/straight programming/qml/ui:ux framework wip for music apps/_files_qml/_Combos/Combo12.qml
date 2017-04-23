import QtQuick 2.6
import "./../_Buttons"
import "./../_MIDIKeyboards"
import "./../_StochasticSelectors"
import "./../_Sliders"
import "./../_imgButtons"
import "./../_QmlBootstrap/examples/"
import "./../_Pad"

Item {

    id: combo2_root
    width: parent.width
    height: parent.height
    visible: true

    Row {
        id: combo2Encapsulator
        height: parent.height * 0.5
        width: parent.width
        anchors.fill: parent
        Repeater {
            id: combo2Repeater
            model: 5
            width: parent.width
            Pad2 {
                model: combo2Repeater.model
            }
        }
    }

}

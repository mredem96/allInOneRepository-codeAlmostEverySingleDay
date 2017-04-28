import QtQuick 2.6
import "./../_Buttons"
import "./../_MIDIKeyboards"
import "./../_StochasticSelectors"
import "./../_Sliders"
import "./../_imgButtons"
import "./../_QmlBootstrap/examples/"
import "./../_Pad"

Item {

    id: combo4_root
    width: parent.width
    height: parent.height
    visible: true

    Row {
        id: combo4Area1
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        spacing: 4

        Repeater{
            id: combo4Area1Repeaster
        model: 5
        Slider1 {model: combo4Area1Repeaster.model}

        }
    }


}

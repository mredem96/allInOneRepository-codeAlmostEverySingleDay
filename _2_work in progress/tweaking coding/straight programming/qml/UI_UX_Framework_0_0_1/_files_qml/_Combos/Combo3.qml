import QtQuick 2.6
import "./../_Buttons"
import "./../_MIDIKeyboards"
import "./../_StochasticSelectors"
import "./../_Sliders"
import "./../_imgButtons"
import "./../_QmlBootstrap/examples/"
import "./../_Pad"

Item {

    id: combo3_root
    width: parent.width
    height: parent.height
    visible: true

    Item {
        id: combo3Area1
        anchors.top: parent.top
        anchors.bottom: parent.verticalCenter
        anchors.left: parent.horizontalCenter
        anchors.right: parent.right
        Combo1 {}
    }

    Item {
        id: combo3Area2
        anchors.top: parent.verticalCenter
        anchors.bottom: parent.bottom
        anchors.left: parent.horizontalCenter
        anchors.right: parent.right
        Combo2 {}
    }

    Item {
        id: combo3Area3
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: parent.horizontalCenter
        Button5 {
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.bottom: parent.bottom
        }
    }
}

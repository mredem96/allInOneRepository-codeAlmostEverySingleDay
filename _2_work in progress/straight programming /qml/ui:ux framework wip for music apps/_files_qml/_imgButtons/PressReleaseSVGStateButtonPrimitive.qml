import QtQuick 2.6

    Rectangle {

        property var _state: 0
        property var img1;
        property var img2;

        id: toggle1
        visible: true
        anchors.fill: parent
        border.color: "transparent"
        color: "transparent"

        Image {
            id: myToggle1Image
            //anchors.fill: parent
            anchors.verticalCenter: parent.verticalCenter
            anchors.horizontalCenter: parent.horizontalCenter
            source: _state == 1 ? img1 : img2
        }

        MouseArea {
            id: statePic
            anchors.fill: parent
            onPressed: {
                _state = 1
                //console.log(_state);
            }
            onReleased:  {
                _state = 0
            }
        }
    }





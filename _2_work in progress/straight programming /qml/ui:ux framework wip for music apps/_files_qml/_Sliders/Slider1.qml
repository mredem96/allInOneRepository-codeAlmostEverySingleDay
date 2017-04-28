import QtQuick 2.6

    Rectangle {

        property var size
        property var yClicked

        property var model: model1

        id: sliderContainer
        width: parent.width / model
        height: parent.height
        x: parent.width / model
        border.color: "black"
        color: "black"
        Item {
            id: containerMaster
            width: parent.width / model
            height: parent.height
            anchors.fill: parent
            Rectangle {
                id: buttonContainer2
                color: Qt.rgba(0, 125, 125, 255);
                //anchors.left: parent.left
                //anchors.right: parent.right
                anchors.bottom: parent.bottom
                height: parent.height * yClicked
                width: parent.width
        }
        }
        MouseArea {
            id: onOFFclicked
            anchors.fill: containerMaster
            onClicked: {
                yClicked = (1.0 - (mouseY / sliderContainer.height));
                //console.log(yClicked);
            }
        }
    }





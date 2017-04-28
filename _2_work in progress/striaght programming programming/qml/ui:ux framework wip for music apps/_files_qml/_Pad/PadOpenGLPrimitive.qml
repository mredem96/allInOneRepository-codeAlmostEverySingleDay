import QtQuick 2.5

    Rectangle {

        property var model: model1
        property var textState: 1;
        property var state1: 'BUTTON 1';
        property var state2: 'BUTTON 1';
        property var size: parent.width / model;
        property var color1: Qt.rgba(255, 255, 0, 255)
        property var color2: "black"
        property var color3: "black"

        function getRandomIntInclusive(min, max) {
          min = Math.ceil(min * 1000);
          max = Math.floor(max * 1000);
          var out = Math.floor(Math.random() * (max - min + 1)) + min;
          out = out * 0.001;
          console.log(parseFloat(out));
          return parseFloat(out);
        }

        id: pad_root
        visible: true
        //width: size*2;
        //height: size;
        anchors.verticalCenter: parent.verticalCenter
        //anchors.horizontalCenter: parent.horizontalCenter
        border.color: color3
        color: textState == 1 ? color1 : color2
        width: parent.width / model
        height: parent.width / model

        MouseArea {
            id: onOFFclicked
            anchors.fill: pad_root
            onPressed: {
                textState = 0
                //console.log(textState)
                console.log(textState);
            }
            onReleased: {
                textState = 1;
                console.log(textState);
            }
        }

        Text {
            id: onOffLabel
            text: textState == 1 ? state2 : state1
            anchors.horizontalCenter: pad_root.horizontalCenter;
            anchors.verticalCenter: pad_root.verticalCenter;
            color: textState == 1 ? color3 : color1
            font.pixelSize: pad_root.width / 30.0
        }
    }


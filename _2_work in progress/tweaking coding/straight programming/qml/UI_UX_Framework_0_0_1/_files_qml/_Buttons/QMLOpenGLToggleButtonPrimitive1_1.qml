import QtQuick 2.5

    Rectangle {
        property var model: model1

        property var textState: 1;
        property var state1: 'ON';
        property var state2: 'OFF';
        property var size: 320;
        property var color1: "black"
        property var color2: "white"
        property var color3: Qt.rgba(0, 255, 255, 255)

        function getRandomIntInclusive(min, max) {
          min = Math.ceil(min * 1000);
          max = Math.floor(max * 1000);
          var out = Math.floor(Math.random() * (max - min + 1)) + min;
          out = out * 0.001;
          console.log(parseFloat(out));
          return parseFloat(out);
        }

        property var min1; property var max1;
        property var min2; property var max2;
        property var min3; property var max3;

        function rgba(min1, max1, min2, max2, min3, max3) {

            var rgb;

            rgb[0] = getRandomIntInclusive(min1 +  max1);
            function returnR() {return rgb[0];}

            rgb[1] = getRandomIntInclusive(min2 +  max2);
            function returnB() {return rgb[1];}

            rgb[2] = getRandomIntInclusive(min3 +  max3);
            function returnG() {return rgb[2];}

            return rgb;

        }

        id: button1_root
        visible: true
        width: parent.width / model
        height: parent.height
        //width: size*2;
        //height: size;
        border.color: color3
        color: textState == 1 ? color1 : color2
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom

        MouseArea {
            id: onOFFclicked
            anchors.fill: button1_root
            onPressed: {
                textState = 0
                //console.log(textState)
                console.log(textState);
                regnenerate();

            }
            onReleased: {
                textState = 1;
                console.log(textState);
            }
        }

        Text {
            id: onOffLabel
            text: textState == 1 ? state2 : state1
            anchors.horizontalCenter: button1_root.horizontalCenter;
            anchors.verticalCenter: button1_root.verticalCenter;
            color: textState == 1 ? color3 : color1
            font.pixelSize: button1_root.width / 10.0
        }
    }


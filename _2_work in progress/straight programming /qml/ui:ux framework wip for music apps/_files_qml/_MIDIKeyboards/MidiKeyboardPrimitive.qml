import QtQuick 2.6

Row {

    property var keyboardModelData: [0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0];
    property var keyboardKey: 0
    property var midiNote: 0
    property var holdKeyValue: 0
    property var color1: "black"
    property var color2: "white"
    property var color3: Qt.rgba(0, 1, 1, 1);

    function getKeyColorRandom(min, max) {
      min = Math.ceil(min * 1000);
      max = Math.floor(max * 1000);
      var out = Math.floor(Math.random() * (max - min + 1)) + min;
      out = out * 0.001;
      console.log(parseFloat(out));
      return parseFloat(out);
    }

    id: midiKeyboardRoot
    visible: true
    anchors.fill: parent

    Repeater {
        id: midiKeyboardRepeater
        visible: true
        anchors.fill: parent
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent. top
        anchors.bottom: parent.bottom
        model: keyboardModelData

        delegate: Rectangle {
            id: keyNote
            visible: true
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            width: parent.width / (midiKeyboardRepeater.model.length)
            border.color: keyboardModelData[index] == 0 ? color1 : color2
            color: keyboardModelData[index] == 0 ? color2 : color1

            MouseArea {
                id: keyBoardMouseArea
                anchors.fill: parent
                onPressed:  {
                    keyboardKey = index;
                    midiNote = 60 + index;
                    holdKeyValue = keyboardModelData[index];
                    keyboardModelData[index] = 2;
                    if(keyboardModelData[index] == 2) {keyNote.color = color3;};
                    console.log("key = " + (60+index));
                }
                onReleased: {
                    keyboardKey = 0;
                    midiNote = 0;
                    keyboardModelData[index] = holdKeyValue;
                    keyNote.color = keyboardModelData[index] == 0 ? color2 : color1
                    console.log("key = " + 0);

                }
            }
        }
    }
}

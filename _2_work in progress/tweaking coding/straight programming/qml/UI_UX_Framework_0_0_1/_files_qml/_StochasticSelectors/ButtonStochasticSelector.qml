import QtQuick 2.6

Item {
    property var model: model1
    anchors.fill: parent  // fit item size to parent size

    id: randomMIDIkeyboardSelector;

    //anchors.fill: parent  // fit item size to parent size
    property var random: 0;

    function randomSelection(min, max) {
        min = Math.ceil(min);
        max = Math.floor(max);
        var out = Math.floor(Math.random() * (max - min + 1)) + min;
        console.log(parseFloat(out));
        return parseFloat(out);
    }

    function createMidiKeyboard(itemToBeInstantiated) {
        var component = Qt.createComponent(itemToBeInstantiated)
        if (component.status === Component.Ready) {
            console.log("Component created with success!! ")
            var midiKeyboard = component.createObject(randomMIDIkeyboardSelector, {model: model});
        }
        else if (component.status === Component.Error) {
            console.log("Error loading component: ", component.errorString())
        }
    }

    function randomPicking() {
        random = parseInt(randomSelection(1, 8));
        if(random == 1) {createMidiKeyboard("./../_Buttons/Button1.qml");}
        if(random == 2) {createMidiKeyboard("./../_Buttons/Button1_1.qml");}
        if(random == 3) {createMidiKeyboard("./../_Buttons/Button2.qml");}
        if(random == 4) {createMidiKeyboard("./../_Buttons/Button2_2.qml");}
        if(random == 5) {createMidiKeyboard("./../_Buttons/Button3.qml");}
        if(random == 6) {createMidiKeyboard("./../_Buttons/Button3_3.qml");}
        if(random == 7) {createMidiKeyboard("./../_Buttons/Button4.qml");}
        if(random == 8) {createMidiKeyboard("./../_Buttons/Button4_4.qml");}
        return random;
    }

    Component.onCompleted: {
        randomPicking();
    }

}


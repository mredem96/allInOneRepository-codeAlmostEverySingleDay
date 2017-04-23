import QtQuick 2.6

Item {
    id: randomMIDIkeyboardSelector;
    anchors.fill: parent  // fit item size to parent size
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
            var midiKeyboard = component.createObject(randomMIDIkeyboardSelector, {});
        }
        else if (component.status === Component.Error) {
            console.log("Error loading component: ", component.errorString())
        }
    }

    function randomPicking() {
        random = parseInt(randomSelection(1, 5));
        if(random == 1) {createMidiKeyboard("./MidiKeyboardRandomSelect.qml");}
        //if(random == 2) {createMidiKeyboard("./PressReleaseSVGStateButtonPrimitive.qml");}
        if(random == 2) {createMidiKeyboard("./ImgButtonsStochasticSelector.qml");}
        if(random == 3) {createMidiKeyboard("./../_Sliders/Slider1.qml");}
        if(random == 4) {createMidiKeyboard("./QmlBootstrapExamplesStochasticSelector.qml");}
        if(random == 5) {createMidiKeyboard("./PadStochasticSelector.qml");}
        return random;
    }

    Component.onCompleted: {
        randomPicking();
    }

}


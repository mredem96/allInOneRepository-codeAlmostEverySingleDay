import QtQuick 2.6

Item {
    id: randomMIDIkeyboardSelector;
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
        random = parseInt(randomSelection(1, 7));
        if(random == 1) {createMidiKeyboard("./../_QmlBootstrap/examples/AvatarListPage.qmç");}
        if(random == 2) {createMidiKeyboard("./../_QmlBootstrap/examples/ButtonBarPage.qml");}
        if(random == 3) {createMidiKeyboard("./../_QmlBootstrap/examples/ButtonPage.qml");}
        if(random == 4) {createMidiKeyboard("./../_QmlBootstrap/examples/CardPage.qml");}
        if(random == 5) {createMidiKeyboard("./../_QmlBootstrap/examples/DefaultListPage.qml");}
        if(random == 6) {createMidiKeyboard("./../_QmlBootstrap/examples/IconListPage.qml");}
        if(random == 7) {createMidiKeyboard("./../_QmlBootstrap/examples/ThumbnailListPage.qml");}
        return random;
    }

    Component.onCompleted: {
        randomPicking();
    }

}


import QtQuick 2.6

QMLOpenGLToggleButtonPrimitive {

    textState: 1;
    state1: 'ON';
    state2: 'OFF';
    size: 320;
    color1: "black";
    color2: "white";
    color3: Qt.rgba(returnR(), returnB(), returnG(), 1);

    Component.onCompleted: {
        rgba(0.25, 0.75, 0.5, 1, 0.1, 0.3);
    }

}

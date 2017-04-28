import QtQuick 2.4
import QtQuick.Controls 1.3 as Controls

import "./../modules/Material/"
import "./../modules/Material/Extras/"
import "./../modules/Material/fonts"
import "./../modules/Material/icons/"
import "./../modules/Material/ListItems"
import "./../modules/QtQuick/Controls/Styles/Material"


Item {

    anchors.fill:parent

    Column {
        anchors.centerIn: parent
        spacing: Units.dp(20)

        Button {
            text: "Simple Button"
            anchors.horizontalCenter: parent.horizontalCenter
            onClicked: snackbar.open("Simple, isn't it?")
        }

        Button {
            text: "Raised Button"
            elevation: 1
            anchors.horizontalCenter: parent.horizontalCenter
            onClicked: snackbar.open("This is a snackbar")
        }

        Button {
            text: "Disabled Raised Button"
            elevation: 1
            enabled: false
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Button {
            text: "Wide Button"

            width: Units.dp(200)
            elevation: 1
            anchors.horizontalCenter: parent.horizontalCenter

            onClicked: snackbar.open("That button is wide, and so is this snackbar!")
        }

        Button {
            id: focusableButton
            text: "Focusable with really long text"
            elevation: 1
            activeFocusOnPress: true
            anchors.horizontalCenter: parent.horizontalCenter

            onClicked: snackbar.open("The text is really very very very very very long and now it needs to wrap, so this should show as two lines!")
        }

        Button {
            text: "Colored button"
            textColor: Theme.accentColor
            anchors.horizontalCenter: parent.horizontalCenter

            onClicked: snackbar.open("That button is colored!")
        }

        Button {
            text: "Focusable button #2"
            elevation: 1
            activeFocusOnPress: true
            backgroundColor: Theme.primaryColor
            anchors.horizontalCenter: parent.horizontalCenter

            onClicked: snackbar.open("That button is colored!")
        }
    }

    ActionButton {
        anchors {
            right: parent.right
            bottom: snackbar.top
            margins: Units.dp(32)
        }

        action: Action {
            id: addContent
            text: "&Copy"
            shortcut: "Ctrl+C"
            onTriggered: snackbar.open("We do actions too!")
        }
        iconName: "content/add"
    }

    Snackbar {
        id: snackbar
    }
}

import QtQuick 2.4
import QtQuick.Layouts 1.1

import "./../modules/Material/"
import "./../modules/Material/Extras/"
import "./../modules/Material/fonts"
import "./../modules/Material/icons/"
import "./../modules/Material/ListItems"
import "./../modules/QtQuick/Controls/Styles/Material"

ColumnLayout {
    spacing: 0
    anchors.fill: parent

    Repeater {
        model: 2

        Rectangle {
            Layout.fillHeight: true
            Layout.fillWidth: true
            Layout.minimumHeight: grid.height + Units.dp(80)
            Layout.minimumWidth: grid.width + Units.dp(80)
            color: index == 0 ? "#EEE" : "#333"

            GridLayout {
                id: grid
                anchors.centerIn: parent
                columns: 3

                // Empty filler
                Item { width: 1; height: 1 }

                Label {
                    Layout.alignment : Qt.AlignHCenter
                    text: "Normal"
                    color: index == 0 ? Theme.light.textColor : Theme.dark.textColor
                }

                Label {
                    Layout.alignment : Qt.AlignHCenter
                    text: "Disabled"
                    color: index == 0 ? Theme.light.textColor : Theme.dark.textColor
                }

                Label {
                    text: "On"
                    color: index == 0 ? Theme.light.textColor : Theme.dark.textColor
                }

                CheckBox {
                    checked: true
                    text: "On"
                    darkBackground: index == 1
                }

                CheckBox {
                    checked: true
                    enabled: false
                    text: "Disabled"
                    darkBackground: index == 1
                }

                Label {
                    text: "Off"
                    color: index == 0 ? Theme.light.textColor : Theme.dark.textColor
                }

                CheckBox {
                    text: "Off"
                    darkBackground: index == 1
                }

                CheckBox {
                    text: "Disabled"
                    enabled: false
                    darkBackground: index == 1
                }
            }
        }
    }
}

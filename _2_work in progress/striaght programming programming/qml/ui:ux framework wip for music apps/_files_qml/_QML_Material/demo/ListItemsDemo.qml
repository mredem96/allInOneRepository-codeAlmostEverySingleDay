import QtQuick 2.4
import "./../modules/Material/"
import "./../modules/Material/Extras/"
import "./../modules/Material/fonts"
import "./../modules/Material/icons/"
import "./../modules/Material/ListItems" as ListItem
import "./../modules/QtQuick/Controls/Styles/Material"

Item {
    anchors.fill: parent

    View {
        anchors {
            fill: parent
            margins: Units.dp(32)
        }

        elevation: 1

        Column {
            anchors.fill: parent

            ListItem.Subheader {
                text: "Section Subheader"
            }

            ListItem.Standard {
                text: "Standard list item"
            }

            ListItem.Subtitled {
                text: "Subtitled list item"
                subText: "With some subtext!"
            }

            ListItem.Subtitled {
                text: "Subtitled list item"
                subText: "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer nec eleifend arcu, eu convallis nisi."
                valueText: "2h ago"

                maximumLineCount: 3
            }

            ListItem.Subtitled {
                text: "Subtitled list item"
                subText: "With some subtext, icon, and secondary item!"
                secondaryItem: Switch {
                    id: enablingSwitch
                    anchors.verticalCenter: parent.verticalCenter
                }

                onClicked: enablingSwitch.checked = !enablingSwitch.checked

                action: Icon {
                    anchors.centerIn: parent
                    name: "device/access_alarm"
                    size: Units.dp(32)
                }
            }

            ListItem.SimpleMenu {
                text: "Subtitled list item"
                model: ["A", "B and some long text that should not clip", "C"]
            }
        }
    }
}

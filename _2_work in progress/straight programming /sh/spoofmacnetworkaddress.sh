spoof () {
    getmac () {
        ifconfig "$1" | grep -o -E '([[:xdigit:]]{1,2}:){5}[[:xdigit:]]{1,2}'
    }
 
    macorig=$(networksetup -getmacaddress "$1" | grep -o -E '([[:xdigit:]]{1,2}:){5}[[:xdigit:]]{1,2}')
    macprev=$(getmac "$1")
    macrand=$(openssl rand -hex 6 | sed 's/\(..\)/\1:/g; s/.$//')
    sudo /System/Library/PrivateFrameworks/Apple80211.framework/Resources/airport -z;
    sudo ifconfig "$1" ether "$macrand"; networksetup -detectnewhardware;
    macnass=$(getmac "$1")
    echo "Original MAC: ${macorig}";
    echo "Previous MAC: ${macprev}";
    echo "Your new MAC: ${CBLUE}${macnass}";
 
    if [ "${macnass}" == "${macprev}" ] ; then
        echo "${CRED}ATTENTION: NO NEW MAC ASSIGNED DUE TO LAG IN OS X";
    fi
}

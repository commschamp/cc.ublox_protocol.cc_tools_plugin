// Generated by commsdsl2tools_qt v6.3.3

#include "CfgCfg.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgCfgMask.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgCfg.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_clearMask(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgCfgFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ClearMask;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgCfgMask(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_saveMask(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgCfgFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SaveMask;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgCfgMask(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_loadMask(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgCfgFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::LoadMask;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgCfgMask(Field::name(), serHidden);
    return props;
}

struct DeviceMaskMembers
{
    static QVariantMap createProps_deviceMask(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgCfgFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DeviceMaskMembers::DeviceMask;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "devBBR")
                .add(1U, "devFlash")
                .add(2U, "devEEPROM")
                .add(4U, "devSpiFlash")
                .asMap();
    }
}; // struct DeviceMaskMembers

static QVariantMap createProps_deviceMask(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgCfgFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DeviceMask;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .field(DeviceMaskMembers::createProps_deviceMask(serHidden))
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_clearMask(false));
    props.append(createProps_saveMask(false));
    props.append(createProps_loadMask(false));
    props.append(createProps_deviceMask(false));
    return props;
}

} // namespace

class CfgCfgImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgCfg<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgCfgImpl
    >
{
public:
    CfgCfgImpl() = default;
    CfgCfgImpl(const CfgCfgImpl&) = delete;
    CfgCfgImpl(CfgCfgImpl&&) = delete;
    virtual ~CfgCfgImpl() = default;
    CfgCfgImpl& operator=(const CfgCfgImpl&) = default;
    CfgCfgImpl& operator=(CfgCfgImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgCfg::CfgCfg() : m_pImpl(new CfgCfgImpl) {}
CfgCfg::~CfgCfg() = default;

CfgCfg& CfgCfg::operator=(const CfgCfg& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgCfg& CfgCfg::operator=(CfgCfg&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgCfg::MsgIdParamType CfgCfg::doGetId()
{
    return ::cc_ublox::message::CfgCfg<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgCfg::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgCfg::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgCfg::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgCfg::resetImpl()
{
    m_pImpl->reset();
}

bool CfgCfg::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgCfg*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgCfg::MsgIdParamType CfgCfg::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgCfg::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgCfg::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgCfg::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgCfg::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgCfg::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

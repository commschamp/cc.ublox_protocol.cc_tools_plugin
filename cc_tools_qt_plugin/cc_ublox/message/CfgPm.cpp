// Generated by commsdsl2tools_qt v6.3.3

#include "CfgPm.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgPm.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_res1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Res1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_res2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Res2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_res3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Res3;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

struct FlagsMembers
{
    static QVariantMap createProps_res1(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgPmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::Res1;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .asMap();
    }

    static QVariantMap createProps_internal(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgPmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::Internal;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .asMap();
    }

    static QVariantMap createProps_bitsMid(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgPmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::BitsMid;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "extintSelect")
                .add(1U, "extintWake")
                .add(2U, "extintBackup")
                .asMap();
    }

    static QVariantMap createProps_limitPeakCurr(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgPmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::LimitPeakCurr;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("Disabled", 0)
                .add("Enabled", 1)
                .asMap();
    }

    static QVariantMap createProps_bitsHigh(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgPmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::BitsHigh;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "WaitTimeFix")
                .add(1U, "updateRTC")
                .add(2U, "updateEPH")
                .asMap();
    }
}; // struct FlagsMembers

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(FlagsMembers::createProps_res1(true))
            .add(FlagsMembers::createProps_internal(true))
            .add(FlagsMembers::createProps_bitsMid(true))
            .add(FlagsMembers::createProps_limitPeakCurr(true))
            .add(FlagsMembers::createProps_bitsHigh(true))
            .asMap();
}

static QVariantMap createProps_updatePeriod(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::UpdatePeriod;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_searchPeriod(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SearchPeriod;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_gridOffset(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GridOffset;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_onTime(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::OnTime;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_minAcqTime(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MinAcqTime;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_res1(false));
    props.append(createProps_res2(false));
    props.append(createProps_res3(false));
    props.append(createProps_flags(false));
    props.append(createProps_updatePeriod(false));
    props.append(createProps_searchPeriod(false));
    props.append(createProps_gridOffset(false));
    props.append(createProps_onTime(false));
    props.append(createProps_minAcqTime(false));
    return props;
}

} // namespace

class CfgPmImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgPm<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgPmImpl
    >
{
public:
    CfgPmImpl() = default;
    CfgPmImpl(const CfgPmImpl&) = delete;
    CfgPmImpl(CfgPmImpl&&) = delete;
    virtual ~CfgPmImpl() = default;
    CfgPmImpl& operator=(const CfgPmImpl&) = default;
    CfgPmImpl& operator=(CfgPmImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPm::CfgPm() : m_pImpl(new CfgPmImpl) {}
CfgPm::~CfgPm() = default;

CfgPm& CfgPm::operator=(const CfgPm& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPm& CfgPm::operator=(CfgPm&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgPm::MsgIdParamType CfgPm::doGetId()
{
    return ::cc_ublox::message::CfgPm<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgPm::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPm::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPm::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPm::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPm::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPm*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPm::MsgIdParamType CfgPm::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPm::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPm::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPm::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPm::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPm::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin

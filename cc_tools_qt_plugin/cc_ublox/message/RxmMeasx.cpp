// Generated by commsdsl2tools_qt v6.3.4

#include "RxmMeasx.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/GnssId.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res8.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/RxmMeasx.h"

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
    using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_gpsTOW(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GpsTOW;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_gloTOW(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GloTOW;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_bdsTOW(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::BdsTOW;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_qzssTOW(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::QzssTOW;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_gpsTOWacc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GpsTOWacc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(2U)
            .asMap();
}

static QVariantMap createProps_gloTOWacc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GloTOWacc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(2U)
            .asMap();
}

static QVariantMap createProps_bdsTOWacc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::BdsTOWacc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(2U)
            .asMap();
}

static QVariantMap createProps_reserved3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved3;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_qzssTOWacc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::QzssTOWacc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(2U)
            .asMap();
}

static QVariantMap createProps_numSV(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumSV;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

struct FlagsMembers
{
    static QVariantMap createProps_towSet(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::TowSet;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("No", 0)
                .add("Yes", 1)
                .add("Yes2", 2)
                .asMap();
    }

    static QVariantMap createProps_reserved(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::Reserved;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .hidden()
                .asMap();
    }
}; // struct FlagsMembers

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(FlagsMembers::createProps_towSet(true))
            .add(FlagsMembers::createProps_reserved(true))
            .asMap();
}

static QVariantMap createProps_reserved4(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved4;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res8(Field::name(), serHidden);
    return props;
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_gnssId(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::GnssId;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_gnssId(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_svid(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Svid;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_cNo(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::CNo;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_mpathIndic(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::MpathIndic;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add("Not measured", 0)
                    .add("Low", 1)
                    .add("Medium", 2)
                    .add("High", 3)
                    .asMap();
        }

        static QVariantMap createProps_dopplerMS(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::DopplerMS;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(2U)
                    .asMap();
        }

        static QVariantMap createProps_dopplerHz(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::DopplerHz;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(2U)
                    .asMap();
        }

        static QVariantMap createProps_wholeChips(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::WholeChips;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_fracChips(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::FracChips;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_codePhase(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::CodePhase;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .scaledDecimals(9U)
                    .asMap();
        }

        static QVariantMap createProps_intCodePhase(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::IntCodePhase;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_pseuRangeRMSErr(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::PseuRangeRMSErr;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_reserved5(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Reserved5;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
            return props;
        }
    }; // struct ElementMembers

    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_gnssId(serHidden))
                .add(ElementMembers::createProps_svid(serHidden))
                .add(ElementMembers::createProps_cNo(serHidden))
                .add(ElementMembers::createProps_mpathIndic(serHidden))
                .add(ElementMembers::createProps_dopplerMS(serHidden))
                .add(ElementMembers::createProps_dopplerHz(serHidden))
                .add(ElementMembers::createProps_wholeChips(serHidden))
                .add(ElementMembers::createProps_fracChips(serHidden))
                .add(ElementMembers::createProps_codePhase(serHidden))
                .add(ElementMembers::createProps_intCodePhase(serHidden))
                .add(ElementMembers::createProps_pseuRangeRMSErr(serHidden))
                .add(ElementMembers::createProps_reserved5(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmMeasxFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(ListMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_gpsTOW(false));
    props.append(createProps_gloTOW(false));
    props.append(createProps_bdsTOW(false));
    props.append(createProps_reserved2(false));
    props.append(createProps_qzssTOW(false));
    props.append(createProps_gpsTOWacc(false));
    props.append(createProps_gloTOWacc(false));
    props.append(createProps_bdsTOWacc(false));
    props.append(createProps_reserved3(false));
    props.append(createProps_qzssTOWacc(false));
    props.append(createProps_numSV(false));
    props.append(createProps_flags(false));
    props.append(createProps_reserved4(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

class RxmMeasxImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::RxmMeasx<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        RxmMeasxImpl
    >
{
public:
    RxmMeasxImpl() = default;
    RxmMeasxImpl(const RxmMeasxImpl&) = delete;
    RxmMeasxImpl(RxmMeasxImpl&&) = delete;
    virtual ~RxmMeasxImpl() = default;
    RxmMeasxImpl& operator=(const RxmMeasxImpl&) = default;
    RxmMeasxImpl& operator=(RxmMeasxImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmMeasx::RxmMeasx() : m_pImpl(new RxmMeasxImpl) {}
RxmMeasx::~RxmMeasx() = default;

RxmMeasx& RxmMeasx::operator=(const RxmMeasx& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmMeasx& RxmMeasx::operator=(RxmMeasx&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

RxmMeasx::MsgIdParamType RxmMeasx::doGetId()
{
    return ::cc_ublox::message::RxmMeasx<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* RxmMeasx::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmMeasx::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmMeasx::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmMeasx::resetImpl()
{
    m_pImpl->reset();
}

bool RxmMeasx::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmMeasx*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmMeasx::MsgIdParamType RxmMeasx::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmMeasx::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmMeasx::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmMeasx::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmMeasx::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmMeasx::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
